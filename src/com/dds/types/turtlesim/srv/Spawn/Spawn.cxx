// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Spawn.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Spawn.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define turtlesim_srv_Spawn_Response_max_cdr_typesize 260ULL;
#define turtlesim_srv_Spawn_Request_max_cdr_typesize 272ULL;
#define turtlesim_srv_Spawn_Response_max_key_cdr_typesize 0ULL;
#define turtlesim_srv_Spawn_Request_max_key_cdr_typesize 0ULL;

turtlesim::srv::Spawn_Request::Spawn_Request()
{
    // float m_x
    m_x = 0.0;
    // float m_y
    m_y = 0.0;
    // float m_theta
    m_theta = 0.0;
    // string m_name
    m_name ="";

}

turtlesim::srv::Spawn_Request::~Spawn_Request()
{




}

turtlesim::srv::Spawn_Request::Spawn_Request(
        const Spawn_Request& x)
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;
    m_name = x.m_name;
}

turtlesim::srv::Spawn_Request::Spawn_Request(
        Spawn_Request&& x) noexcept 
{
    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;
    m_name = std::move(x.m_name);
}

turtlesim::srv::Spawn_Request& turtlesim::srv::Spawn_Request::operator =(
        const Spawn_Request& x)
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;
    m_name = x.m_name;

    return *this;
}

turtlesim::srv::Spawn_Request& turtlesim::srv::Spawn_Request::operator =(
        Spawn_Request&& x) noexcept
{

    m_x = x.m_x;
    m_y = x.m_y;
    m_theta = x.m_theta;
    m_name = std::move(x.m_name);

    return *this;
}

bool turtlesim::srv::Spawn_Request::operator ==(
        const Spawn_Request& x) const
{

    return (m_x == x.m_x && m_y == x.m_y && m_theta == x.m_theta && m_name == x.m_name);
}

bool turtlesim::srv::Spawn_Request::operator !=(
        const Spawn_Request& x) const
{
    return !(*this == x);
}

size_t turtlesim::srv::Spawn_Request::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return turtlesim_srv_Spawn_Request_max_cdr_typesize;
}

size_t turtlesim::srv::Spawn_Request::getCdrSerializedSize(
        const turtlesim::srv::Spawn_Request& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;


    return current_alignment - initial_alignment;
}

void turtlesim::srv::Spawn_Request::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_x;
    scdr << m_y;
    scdr << m_theta;
    scdr << m_name.c_str();

}

void turtlesim::srv::Spawn_Request::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_x;
    dcdr >> m_y;
    dcdr >> m_theta;
    dcdr >> m_name;
}

/*!
 * @brief This function sets a value in member x
 * @param _x New value for member x
 */
void turtlesim::srv::Spawn_Request::x(
        float _x)
{
    m_x = _x;
}

/*!
 * @brief This function returns the value of member x
 * @return Value of member x
 */
float turtlesim::srv::Spawn_Request::x() const
{
    return m_x;
}

/*!
 * @brief This function returns a reference to member x
 * @return Reference to member x
 */
float& turtlesim::srv::Spawn_Request::x()
{
    return m_x;
}

/*!
 * @brief This function sets a value in member y
 * @param _y New value for member y
 */
void turtlesim::srv::Spawn_Request::y(
        float _y)
{
    m_y = _y;
}

/*!
 * @brief This function returns the value of member y
 * @return Value of member y
 */
float turtlesim::srv::Spawn_Request::y() const
{
    return m_y;
}

/*!
 * @brief This function returns a reference to member y
 * @return Reference to member y
 */
float& turtlesim::srv::Spawn_Request::y()
{
    return m_y;
}

/*!
 * @brief This function sets a value in member theta
 * @param _theta New value for member theta
 */
void turtlesim::srv::Spawn_Request::theta(
        float _theta)
{
    m_theta = _theta;
}

/*!
 * @brief This function returns the value of member theta
 * @return Value of member theta
 */
float turtlesim::srv::Spawn_Request::theta() const
{
    return m_theta;
}

/*!
 * @brief This function returns a reference to member theta
 * @return Reference to member theta
 */
float& turtlesim::srv::Spawn_Request::theta()
{
    return m_theta;
}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void turtlesim::srv::Spawn_Request::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void turtlesim::srv::Spawn_Request::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& turtlesim::srv::Spawn_Request::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& turtlesim::srv::Spawn_Request::name()
{
    return m_name;
}


size_t turtlesim::srv::Spawn_Request::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return turtlesim_srv_Spawn_Request_max_key_cdr_typesize;
}

bool turtlesim::srv::Spawn_Request::isKeyDefined()
{
    return false;
}

void turtlesim::srv::Spawn_Request::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

turtlesim::srv::Spawn_Response::Spawn_Response()
{
    // string m_name
    m_name ="";

}

turtlesim::srv::Spawn_Response::~Spawn_Response()
{
}

turtlesim::srv::Spawn_Response::Spawn_Response(
        const Spawn_Response& x)
{
    m_name = x.m_name;
}

turtlesim::srv::Spawn_Response::Spawn_Response(
        Spawn_Response&& x) noexcept 
{
    m_name = std::move(x.m_name);
}

turtlesim::srv::Spawn_Response& turtlesim::srv::Spawn_Response::operator =(
        const Spawn_Response& x)
{

    m_name = x.m_name;

    return *this;
}

turtlesim::srv::Spawn_Response& turtlesim::srv::Spawn_Response::operator =(
        Spawn_Response&& x) noexcept
{

    m_name = std::move(x.m_name);

    return *this;
}

bool turtlesim::srv::Spawn_Response::operator ==(
        const Spawn_Response& x) const
{

    return (m_name == x.m_name);
}

bool turtlesim::srv::Spawn_Response::operator !=(
        const Spawn_Response& x) const
{
    return !(*this == x);
}

size_t turtlesim::srv::Spawn_Response::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return turtlesim_srv_Spawn_Response_max_cdr_typesize;
}

size_t turtlesim::srv::Spawn_Response::getCdrSerializedSize(
        const turtlesim::srv::Spawn_Response& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.name().size() + 1;

    return current_alignment - initial_alignment;
}

void turtlesim::srv::Spawn_Response::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_name.c_str();

}

void turtlesim::srv::Spawn_Response::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_name;}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void turtlesim::srv::Spawn_Response::name(
        const std::string& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void turtlesim::srv::Spawn_Response::name(
        std::string&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::string& turtlesim::srv::Spawn_Response::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::string& turtlesim::srv::Spawn_Response::name()
{
    return m_name;
}


size_t turtlesim::srv::Spawn_Response::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return turtlesim_srv_Spawn_Response_max_key_cdr_typesize;
}

bool turtlesim::srv::Spawn_Response::isKeyDefined()
{
    return false;
}

void turtlesim::srv::Spawn_Response::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}


