#ifndef TOPATSSIMBACAMPKEYWORDBASEGETRESPONSE_H
#define TOPATSSIMBACAMPKEYWORDBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 直通车推广计划下的词报表基础数据查询<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsSimbaCampkeywordbaseGetResponse : public TaoResponse
{
public:
 virtual ~TopatsSimbaCampkeywordbaseGetResponse() { }

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
