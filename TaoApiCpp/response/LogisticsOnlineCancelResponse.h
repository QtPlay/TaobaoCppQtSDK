#ifndef LOGISTICSONLINECANCELRESPONSE_H
#define LOGISTICSONLINECANCELRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 调此接口取消发货的订单，重新选择物流公司发货。前提是物流公司未揽收货物。对未发货和已经被物流公司揽收的物流订单，是不能取消的。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOnlineCancelResponse : public TaoResponse
{
public:
 virtual ~LogisticsOnlineCancelResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);  QDateTime getModifyTime() const;
  void setModifyTime (QDateTime modifyTime);  qlonglong getRecreatedOrderId() const;
  void setRecreatedOrderId (qlonglong recreatedOrderId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 成功与失败
 **/
  bool isSuccess;

/**
 * @brief 修改时间
 **/
  QDateTime modifyTime;

/**
 * @brief 重新创建物流订单id
 **/
  qlonglong recreatedOrderId;

};

#endif
