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
#ifndef CORE_ENTITY_USER_HPP_
#define CORE_ENTITY_USER_HPP_

#include <string>
#include "employee.hpp"

namespace entity {

// Fields
constexpr char FIELD_PIN[] = "Entity.Field.Pin";
constexpr char FIELD_DPNAME[] = "Entity.Field.DisplayName";

// Todo (code) - user entity must only contain:
// EmployeeID
// Position
// Display Name (if empty, fullname will be displayed)
// PIN
class User : public Employee {
 public:
    User(const std::string& firstname,
         const std::string& middlename,
         const std::string& lastname,
         const std::string& birthdate,
         const std::string& gender,
         const std::string& employeeID,
         const std::string& position,
         const std::string& pin);
    User() = default;
    ~User() = default;

    void setPIN(const std::string& pin) {
        mPIN = pin;
    }

    inline const std::string pin() const {
        return mPIN;
    }
    /*!
     * Todo (spec): What is the business rule for user IDs?
     * Here we're using employeeID as the userID (but this is subject to change)
    */
 protected:
    std::string mPIN;
};

}  // namespace entity
#endif  // CORE_ENTITY_USER_HPP_
