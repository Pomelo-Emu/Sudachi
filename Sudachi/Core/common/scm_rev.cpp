// SPDX-FileCopyrightText: 2014 Citra Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/scm_rev.h"

#define GIT_REV      "@GIT_REV@"
#define GIT_BRANCH   "@GIT_BRANCH@"
#define GIT_DESC     "@GIT_DESC@"
#define BUILD_NAME   "@REPO_NAME@"
#define BUILD_DATE   "@BUILD_DATE@"
#define BUILD_FULLNAME "@BUILD_FULLNAME@"
#define BUILD_VERSION "@BUILD_VERSION@"
#define BUILD_ID "@BUILD_ID@"
#define TITLE_BAR_FORMAT_IDLE "@TITLE_BAR_FORMAT_IDLE@"
#define TITLE_BAR_FORMAT_RUNNING "@TITLE_BAR_FORMAT_RUNNING@"

namespace Common {

const char g_scm_rev[]      = GIT_REV;
const char g_scm_branch[]   = GIT_BRANCH;
const char g_scm_desc[]     = GIT_DESC;
const char g_build_name[]   = BUILD_NAME;
const char g_build_date[]   = BUILD_DATE;
const char g_build_fullname[] = BUILD_FULLNAME;
const char g_build_version[]  = BUILD_VERSION;
const char g_build_id[] = BUILD_ID;
const char g_title_bar_format_idle[] = TITLE_BAR_FORMAT_IDLE;
const char g_title_bar_format_running[] = TITLE_BAR_FORMAT_RUNNING;

} // namespaces
