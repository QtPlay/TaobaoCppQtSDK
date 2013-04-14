#ifndef LOGISTICSORDERTRACEPUSHREQUEST_H
#define LOGISTICSORDERTRACEPUSHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOrdertracePushResponse.h>

/**
 * TOP API: 卖家使用自己的物流公司发货，可以通过本接口将订单的流转信息推送到淘宝，淘宝保存这些流转信息，并可在页面展示这些流转信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrdertracePushRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCompanyName() const
;  void setCompanyName (QString companyName);

 QString getCurrentCity() const
;  void setCurrentCity (QString currentCity);

 QString getFacilityName() const
;  void setFacilityName (QString facilityName);

 QString getMailNo() const
;  void setMailNo (QString mailNo);

 QString getNextCity() const
;  void setNextCity (QString nextCity);

 QString getNodeDescription() const
;  void setNodeDescription (QString nodeDescription);

 QDateTime getOccureTime() const
;  void setOccureTime (QDateTime occureTime);

 QString getOperateDetail() const
;  void setOperateDetail (QString operateDetail);

 QString getOperatorContact() const
;  void setOperatorContact (QString operatorContact);

 QString getOperatorName() const
;  void setOperatorName (QString operatorName);


  virtual LogisticsOrdertracePushResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流公司名称
 **/
  QString companyName;

/**
 * @brief 流转节点的当前城市
 **/
  QString currentCity;

/**
 * @brief 网点名称
 **/
  QString facilityName;

/**
 * @brief 快递单号。各个快递公司的运单号格式不同。
 **/
  QString mailNo;

/**
 * @brief 流转节点的下一个城市
 **/
  QString nextCity;

/**
 * @brief 描述当前节点的操作，操作是“揽收”、“派送”或“签收”。
 **/
  QString nodeDescription;

/**
 * @brief 流转节点发生时间
 **/
  QDateTime occureTime;

/**
 * @brief 流转节点的详细地址及操作描述
 **/
  QString operateDetail;

/**
 * @brief 快递业务员联系方式，手机号码或电话。
 **/
  QString operatorContact;

/**
 * @brief 快递业务员名称
 **/
  QString operatorName;

};

#endif  /* LOGISTICSORDERTRACEPUSHREQUEST_H */
