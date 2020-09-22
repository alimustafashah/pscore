/**************************************************************************************************
*                                            PSCORE                                               *
*                               Copyright (C) 2020 Pointon Software                               *
*                                                                                                 *
*           This program is free software: you can redistribute it and/or modify                  *
*           it under the terms of the GNU Affero General Public License as published              *
*           by the Free Software Foundation, either version 3 of the License, or                  *
*           (at your option) any later version.                                                   *
*                                                                                                 *
*           This program is distributed in the hope that it will be useful,                       *
*           but WITHOUT ANY WARRANTY; without even the implied warranty of                        *
*           MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                         *
*           GNU Affero General Public License for more details.                                   *
*                                                                                                 *
*           You should have received a copy of the GNU Affero General Public License              *
*           along with this program.  If not, see <https://www.gnu.org/licenses/>.                *
*                                                                                                 *
*           Ben Ziv <pointonsoftware@gmail.com>                                                   *
*                                                                                                 *
**************************************************************************************************/
#ifndef INVOKER_DOMAIN_USERLOGIN_AUTHCONTROLLER_HPP_
#define INVOKER_DOMAIN_USERLOGIN_AUTHCONTROLLER_HPP_

#include <string>
#include <memory>
#include <domain/defines.hpp>
#include "interface/authviewif.hpp"
#include "interface/authdataif.hpp"

namespace domain {
namespace authentication {

class AuthController {
 public:
    explicit AuthController(std::unique_ptr<AuthViewIface>&& view,
                            std::unique_ptr<AuthDataProviderIface>&& dataprovider);
    bool login(const std::string& username, const std::string& password);
    bool loginWithPIN(const std::string& pin);
 private:
    std::unique_ptr<AuthViewIface> mView;
    std::unique_ptr<AuthDataProviderIface> mDataProvider;
    status::General authenticatePIN(const std::string& pin);
    bool isPinValid(const std::string& pin);
};

}  // namespace authentication
}  // namespace domain
#endif  // INVOKER_DOMAIN_USERLOGIN_AUTHCONTROLLER_HPP_