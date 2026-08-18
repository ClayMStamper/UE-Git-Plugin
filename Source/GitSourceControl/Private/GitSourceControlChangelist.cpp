#include "GitSourceControlChangelist.h"
#include "Misc/EngineVersionComparison.h"

#if UE_VERSION_NEWER_THAN_OR_EQUAL(5, 0, 0)
FGitSourceControlChangelist FGitSourceControlChangelist::WorkingChangelist(TEXT("Working"), true);
FGitSourceControlChangelist FGitSourceControlChangelist::StagedChangelist(TEXT("Staged"), true);
#endif
