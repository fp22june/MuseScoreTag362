/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MUSESCORE_CONFIG_H
#define MUSESCORE_CONFIG_H

#define MSCORE_UNSTABLE

#define CRASH_REPORT_URL       ""
#define MUSESCORE_NAME_VERSION "MuseScore 4 (4.0.0 unstable)"
#define MUSESCORE_REVISION     ""
#define INSTALL_NAME           "mscore-4.0/"
#define INSTPREFIX             "/usr/local"
#define VERSION                "4.0.0"
#define VERSION_LABEL          "Development"
#define BUILD_NUMBER           ""
#define SPARKLE_APPCAST_URL    ""

#define YOUTUBE_API_KEY ""

#define LOGGER_DEBUGLEVEL_ENABLED

#define BUILD_SHORTCUTS_MODULE
#define BUILD_NETWORK_MODULE
#define BUILD_AUDIO_MODULE
#define BUILD_LEARN_MODULE
#define BUILD_WORKSPACE_MODULE
#define BUILD_CLOUD_MODULE
#define BUILD_LANGUAGES_MODULE
#define BUILD_PLUGINS_MODULE
#define BUILD_PLAYBACK_MODULE
#define BUILD_PALETTE_MODULE
#define BUILD_INSTRUMENTSSCENE_MODULE
#define BUILD_INSPECTOR_MODULE
#define BUILD_AUTOBOT_MODULE
#define BUILD_MULTIINSTANCES_MODULE
/* #undef BUILD_MUSESAMPLER_MODULE */
/* #undef BUILD_VIDEOEXPORT_MODULE */
/* #undef BUILD_VST */
#define BUILD_DIAGNOSTICS

/* #undef ENGRAVING_PAINT_DEBUGGER_ENABLED */
/* #undef ENGRAVING_COMPAT_WRITESTYLE_302 */
#define ENGRAVING_COMPAT_WRITEEXCERPTS_302

#define ENABLE_AUDIO_EXPORT

/* #undef UI_DISABLE_MODALITY */

/* #undef ACCESSIBILITY_LOGGING_ENABLED */

/* #undef QML_LOAD_FROM_SOURCE */
/* #undef TRACE_DRAW_OBJ_ENABLED */

#define SCRIPT_INTERFACE

#define APP_UPDATABLE
/* #undef SPARKLE_ENABLED */
#define SOUNDFONT3
/* #undef WIN_PORTABLE */
/* #undef FOR_WINSTORE */

#endif /* MUSESCORE_CONFIG_H */
