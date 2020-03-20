#include "some_nameProxy.h"

int main(){
    DBus::init();

    std::shared_ptr<DBus::Dispatcher> dispatch = DBus::Dispatcher::create();
    std::shared_ptr<DBus::Connection> conn = dispatch->create_connection( DBus::BusType::SESSION );

    std::shared_ptr<some_nameProxy> ptr = some_nameProxy::create( conn, "", "" );
}
