/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: eyjian@qq.com or eyjian@gmail.com
 */
#ifndef MOOON_DISPATCHER_SENDER_TABLE_H
#define MOOON_DISPATCHER_SENDER_TABLE_H
#include <mooon/sys/lock.h>
#include "sender.h"
#include "mooon/dispatcher/dispatcher.h"
DISPATCHER_NAMESPACE_BEGIN

extern bool check_sender_info(const SenderInfo& sender_info);

class CDispatcherContext;
class CSenderTable
{
public:
    virtual ~CSenderTable() {}
    CSenderTable(CDispatcherContext* context);
    virtual void close_sender(CSender* sender) = 0; 

protected:
    CDispatcherContext* get_context();

private:
    CDispatcherContext* _context;
};

DISPATCHER_NAMESPACE_END
#endif // MOOON_DISPATCHER_SENDER_TABLE_H
