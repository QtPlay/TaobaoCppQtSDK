#ifndef TOPATSUSERACCOUNTREPORTGETRESPONSE_H
#define TOPATSUSERACCOUNTREPORTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 查询用户支付宝账务明细接口。<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 使用之前必须首先申请支付宝API，参考http://open.taobao.com//doc/detail.htm?id=101181#s2<br/> 
2. 只对通过商家认证的、先行赔付卖家以及B2C商家开放<br/> 
3. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回下载URL<br/> 
4. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
5. 下载到的结果是CSV格式的文本文件，默认采用UTF-8编码<br/>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsUserAccountreportGetResponse : public TaoResponse
{
public:
 virtual ~TopatsUserAccountreportGetResponse() { }

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
