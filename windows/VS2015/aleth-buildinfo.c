/* Created manually */

#include "aleth-buildinfo.h"

const struct buildinfo* aleth_get_buildinfo()
{
    static const struct buildinfo buildinfo = {
        .project_version = "1.4.0.dev1-110+commit.4ae74c6e.dirty",
        .git_commit_hash = "4ae74c6ef7d53bf2434ce43d472396ce0ce46d03",
        .system_name = "windows",
        .system_processor = "amd64",
        .compiler_id = "msvc",
        .compiler_version = "19.0.24215.1",
        .build_type = "debug",
    };
    return &buildinfo;
}
