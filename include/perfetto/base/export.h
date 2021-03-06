/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INCLUDE_PERFETTO_BASE_EXPORT_H_
#define INCLUDE_PERFETTO_BASE_EXPORT_H_

#if defined(PERFETTO_SHARED_LIBRARY)

#if defined(PERFETTO_IMPLEMENTATION)
#define PERFETTO_EXPORT __attribute__((visibility("default")))
#else
#define PERFETTO_EXPORT
#endif

#else  // defined(PERFETTO_SHARED_LIBRARY)

#define PERFETTO_EXPORT

#endif  // defined(PERFETTO_SHARED_LIBRARY)

#endif  // INCLUDE_PERFETTO_BASE_EXPORT_H_
