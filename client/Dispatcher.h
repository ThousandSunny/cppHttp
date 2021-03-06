//
// Created by Tinggeng Yan on 2020/6/26.
//

#ifndef CPPHTTP_DISPATCHER_H
#define CPPHTTP_DISPATCHER_H

#include "Request.h"
#include "Response.h"

/**
 * 请求分发器,线程池
 */
class Dispatcher {

public:

    Response *execute(Request request);
};


#endif //CPPHTTP_DISPATCHER_H
