#ifndef TOPATSITEMSALLGETRESPONSE_H
#define TOPATSITEMSALLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 提供异步获取三个月内的所有（出售中和仓库中）商品详情信息接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsItemsAllGetResponse : public TaoResponse
{
public:
 virtual ~TopatsItemsAllGetResponse() { }

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
