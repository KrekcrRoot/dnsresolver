#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;

int main() {

    io_service io;

    std::string host;
    std::cin >> host;
    std::string port;
    std::cin >> port;

    std::cout << std::endl;

    ip::tcp::resolver::query resolver_query (host, port, ip::tcp::resolver::numeric_service);

    ip::tcp::resolver resolver {io};

    ip::tcp::resolver::iterator it = resolver.resolve(resolver_query);
    ip::tcp::resolver::iterator it_end;

    for(; it != it_end; ++it)
    {
        std::cout << it->endpoint().address().to_string() << std::endl;
    }




}
