#ifndef LOGISTICSORDERSTOREPUSHREQUEST_H
#define LOGISTICSORDERSTOREPUSHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOrderstorePushResponse.h>

/**
 * TOP API: 卖家使用自己的物流公司发货，可以通过本接口将订单的仓内信息推送到淘宝，淘宝保存这些仓内信息，并可在页面展示这些仓内信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrderstorePushRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getOccureTime() const
;  void setOccureTime (QDateTime occureTime);

 QString getOperateDetail() const
;  void setOperateDetail (QString operateDetail);

 QString getOperatorContact() const
;  void setOperatorContact (QString operatorContact);

 QString getOperatorName() const
;  void setOperatorName (QString operatorName);

 qlonglong getTradeId() const
;  void setTradeId (qlonglong tradeId);


  virtual LogisticsOrderstorePushResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 流转状态发生时间
 **/
  QDateTime occureTime;

/**
 * @brief 仓内操作描述
 **/
  QString operateDetail;

/**
 * @brief 快递业务员联系方式
 **/
  QString operatorContact;

/**
 * @brief 快递业务员名称
 **/
  QString operatorName;

/**
 * @brief 淘宝订单交易号
 **/
  qlonglong tradeId;

};

#endif  /* LOGISTICSORDERSTOREPUSHREQUEST_H */
