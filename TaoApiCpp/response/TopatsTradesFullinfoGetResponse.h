#ifndef TOPATSTRADESFULLINFOGETRESPONSE_H
#define TOPATSTRADESFULLINFOGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 提供异步批量获取订单详情功能<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 一次可以查询的订单数量为1~100笔，强烈建议一次请求尽可能多的订单<br/> 
2. 提交任务后会生成task_id，后继通过此task_id调用taobao.topats.result.get接口获取任务的结果<br/> 
3. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
4. 这个任务ID有效时间为2天，2天后任务被删除。<br/> 
5. 每个应用每天最多可以调用3万次，超过限制今天无法调用。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTradesFullinfoGetResponse : public TaoResponse
{
public:
 virtual ~TopatsTradesFullinfoGetResponse() { }

  Task getTask() const;
  void setTask (Task task);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创建任务信息。里面只包含task_id和created
 **/
  Task task;

};

#endif
