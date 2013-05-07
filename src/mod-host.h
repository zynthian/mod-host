/*
 * This file is part of mod-host.
 *
 * mod-host is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * mod-host is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mod-host.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
************************************************************************************************************************
*
************************************************************************************************************************
*/

#ifndef  MODD_H
#define  MODD_H


/*
************************************************************************************************************************
*           INCLUDE FILES
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*           DO NOT CHANGE THESE DEFINES
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*           CONFIGURATION DEFINES
************************************************************************************************************************
*/

/* Socket definitions */
#define SOCKET_DEFAULT_PORT     5555
#define SOCKET_MSG_BUFFER_SIZE  1024

/* Protocol commands definition */
#define EFFECT_ADD          "add %s %i"
#define EFFECT_REMOVE       "remove %i"
#define EFFECT_CONNECT      "connect %s %s"
#define EFFECT_DISCONNECT   "disconnect %s %s"
#define EFFECT_BYPASS       "bypass %i %i"
#define EFFECT_PARAM_SET    "param_set %i %s %f"
#define EFFECT_PARAM_GET    "param_get %i %s"


/*
************************************************************************************************************************
*           DATA TYPES
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*           GLOBAL VARIABLES
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*           MACRO'S
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*           FUNCTION PROTOTYPES
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*           CONFIGURATION ERRORS
************************************************************************************************************************
*/


/*
************************************************************************************************************************
*           END HEADER
************************************************************************************************************************
*/

#endif