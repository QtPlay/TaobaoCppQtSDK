#ifndef TOPATSRESULTGETRESPONSE_H
#define TOPATSRESULTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 获取异步任务结果。 
<br/>异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a> 
<br/>1. 只能获取AppKey自身创建的异步任务结果 
<br/>2. 如果任务状态为done，则返回任务结果（如taobao.topats.trades.fullinfo.get）或下载地址（如taobao.topats.trades.sold.get） 
<br/>3. 任务结果下载地址只能使用一次，需要重复下载可重新调用此接口获取下载地址 
<br/>4. 任务结果中的check_code字段为待下载文件的md5 sum，可通过此校验码验证文件下载的完整性
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsResultGetResponse : public TaoResponse
{
public:
 virtual ~TopatsResultGetResponse() { }

  Task getTask() const;
  void setTask (Task task);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回任务处理信息
 **/
  Task task;

};

#endif
