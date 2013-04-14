#ifndef TOPATSITEMCATSGETRESPONSE_H
#define TOPATSITEMCATSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 全量获取后台类目、类目属性、类目属性值数据 
<br/>异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a> 
<br/>1. 每天8点左右会产生今天的全量数据，在8点之前提交获取全量类目数据任务需要等到8点之后才完成，在8点之后提交获取全量类目数据任务可以接近实时返回。 
<br/>2. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回下载URL 
<br/>3. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档 
<br/>4. 下载到的结果是zip压缩包，解压后得到一个标准的csv/json格式的文本文件，文件内容的默认编码格式是UTF-8
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsItemcatsGetResponse : public TaoResponse
{
public:
 virtual ~TopatsItemcatsGetResponse() { }

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
