/**************************************************************************************************
*                                            PSCORE                                               *
*                               Copyright (C) 2021 Pointon Software                               *
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
#ifndef CORE_DOMAIN_ACCOUNTING_INTERFACE_ACCOUNTINGVIEWIF_HPP_
#define CORE_DOMAIN_ACCOUNTING_INTERFACE_ACCOUNTINGVIEWIF_HPP_
#include <vector>
#include <entity/sale.hpp>
#include <entity/saleitem.hpp>

namespace domain {
namespace accounting {

class AccountingViewInterface {
 public:
    AccountingViewInterface() = default;
    virtual ~AccountingViewInterface() = default;

    /*!
     * Invoked if the date-time range used in the query is invalid
    */
    virtual void showInvalidDateTimeRange() = 0;
};

}  // namespace accounting
}  // namespace domain
#endif  // CORE_DOMAIN_ACCOUNTING_INTERFACE_ACCOUNTINGVIEWIF_HPP_