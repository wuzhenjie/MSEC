
/**
 * Tencent is pleased to support the open source community by making MSEC available.
 *
 * Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the GNU General Public License, Version 2.0 (the "License"); 
 * you may not use this file except in compliance with the License. You may 
 * obtain a copy of the License at
 *
 *     https://opensource.org/licenses/GPL-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the 
 * License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific language governing permissions
 * and limitations under the License.
 */


#ifndef __SPP_VERSION_H__
#define __SPP_VERSION_H__

__attribute__((weak)) int  SPP_MAJOR_VER    = 1;
__attribute__((weak)) int  SPP_MINOR_VER    = 0;
__attribute__((weak)) int  SPP_PATCH_VER    = 1;
__attribute__((weak)) int  SPP_COMPATIBLE_VERSION[][3] = {{1, 0, 1},
                                                          {1, 0, 2}};
__attribute__((weak)) char MT_VERSION[64]   = "0.2.1";

#endif
