#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::io_service;
using namespace boost::asio::ip;
std::string data = "HTTP/1.1 200 ok\n\rContent-Length: 13\n\rHello, World!";

int main(){

  io_service io_service;
  tcp::endpoint endpoint(boost::asio::ip::tcp::v4(), 80);
  tcp::acceptor acceptor(io_service, endpoint);
  tcp::socket sock(io_service);
  
  return 0;
}
