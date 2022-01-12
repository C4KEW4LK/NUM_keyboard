/* Copyright 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "NUM.h"

led_config_t g_led_config = {{
                                 // Key Matrix to LED Index
                                 {20, 19, 18, 17},
                                 {16, 15, 14, 13},
                                 {12, 11, 10, 9},
                                 {8, 7, 6, NO_LED},
                                 {5, 4, 3, 2},
                                 {1, NO_LED, 0, NO_LED},
                             },
                             {
                                 // LED Index to Physical Position
                                 // backlights
                                 {194, 0},  {204, 0},  {214, 0},  {224, 0}, 
                                 {194, 13}, {204, 13}, {214, 13}, {224, 13}, 
                                 {194, 26}, {204, 26}, {214, 26}, {224, 26}, 
                                 {194, 39}, {204, 39}, {214, 39}, 
                                 {194, 52}, {204, 52}, {214, 52}, {224, 45}, 
                                      {200, 64},       {214, 64},
                                //underglow
                                 {224, 64}, {214, 64}, {204, 64},   {194, 64},
                                 {194, 51},   {194, 38},   {194, 26},    {194, 13},
                                 {194, 0},    {204, 0},   {214, 0},   {224, 0},
                                 {224, 13}, {224, 26}, {224, 38},  {224, 51},

                             },
                             {
                                 // LED Index to Flag
                                 //backlights
                                 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
                                 //underglow 
                                 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
                             }};