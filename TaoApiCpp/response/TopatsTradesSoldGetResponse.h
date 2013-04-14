#ifndef TOPATSTRADESSOLDGETRESPONSE_H
#define TOPATSTRADESSOLDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 提供异步下载三个月已卖出的在线订单信息接口。<br/>  
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 一次最多可以导出三个月内的所有类型和状态的在线交易记录（可查时间段：前90天内~昨天）<br/>  
2. 用户必须拥有店铺才能获取访问在线交易订单数据，否则无法创建任务<br/> 
3. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回下载URL<br/> 
4. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
5. 下载到的结果是zip压缩包，解压后得到一个标准的json格式的文本文件（返回字段与taobao.trade.fullinfo.get一致，每条订单详情以回车符结尾），文件内容的默认编码格式是UTF-8<br/> 
6. 任务的执行时段01:00~23:00，通常情况下每半小时执行一次任务，执行结束时间依据订单条数大小而定，通常在30~60分钟可以完成任务<br/> 
7. 单个应用每天最多只能调用此接口10万次，超过限制后，当天无法再提交任务
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTradesSoldGetResponse : public TaoResponse
{
public:
 virtual ~TopatsTradesSoldGetResponse() { }

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
