/** 
 * @author: yuyuyuj1e 807152541@qq.com
 * @github: https://github.com/yuyuyuj1e
 * @csdn: https://blog.csdn.net/yuyuyuj1e
 * @date: 2023-02-27 18:25:07
 * @last_edit_time: 2023-02-28 12:48:24
 * @file_path: /Cpp-Web-Server/Dispatcher.cpp
 * @description: 分发器模块源文件
 */

#include "Dispatcher.h"

Dispatcher::Dispatcher(EventLoop* event_loop) {
	m_event_loop = event_loop;
}