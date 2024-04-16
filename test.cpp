#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>

curlpp::Cleanup myCleanup;

std::ostringstream os;
os << curlpp::options::Url(std::string("http://example.com"));
std::string content = os.str();