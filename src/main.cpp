#include <iostream>
#include <extras/githubapiclient.h>

using namespace winterwind::extras;

int main(int argc, const char *argv[])
{
    winterwind::extras::GithubAPIClient github_client(
        "https://api.github.com", "api_key");
    Json::Value result;

    if (github_client.get_issue("org", "depot", 1, result) != GITHUB_RC_OK) {
        std::cerr << "Error to charge github issue" << std::endl;
    }

    // Data in result for exemple :
    std::cout << result["repository_url"] << std::endl;

	return 0;
}
