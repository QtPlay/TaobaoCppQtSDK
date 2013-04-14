#ifndef SUBTASK_H
#define SUBTASK_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 批量异步任务的子任务结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Subtask : public TaoDomain
{

public:
 virtual ~Subtask() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  QString getSubTaskRequest() const;
  void setSubTaskRequest (QString subTaskRequest);
  QString getSubTaskResult() const;
  void setSubTaskResult (QString subTaskResult);
  
  virtual void parseResponse();

private:
/**
 * @brief 标记子任务是否成功。为true表示子任务成功，用户可以按照正确执行的结果格式解析sub_task_result。为false表示子任务失败了，用户需要按照失败的结果格式解析sub_task_result（里面只有sub_code和sub_msg）
 **/
  bool isSuccess;

/**
 * @brief 子任务的有效请求参数，以json格式进行key:value的组合
 **/
  QString subTaskRequest;

/**
 * @brief 子任务返回的结果，以json格式进行key:value组合，可以和单个api请求结果解析复用。以获取交易订单详情为例：子任务执行成功返回的结果格式为：{“trade”:{"tid":123456,"seller_nick":"淘宝卖家"}}；子任务执行失败结果格式为{"sub_code":"isv.trade-not-exist","sub_msg":"交易订单不存在"}
 **/
  QString subTaskResult;

};

#endif  /* SUBTASK_H */
