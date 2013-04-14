#ifndef UDPSHOPGETREQUEST_H
#define UDPSHOPGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UdpShopGetResponse.h>

/**
 * TOP API: 店铺指标查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UdpShopGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getArea() const
;  void setArea (qlonglong area);

 QDateTime getBeginTime() const
;  void setBeginTime (QDateTime beginTime);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 qlonglong getFields() const
;  void setFields (qlonglong fields);

 QString getParameters() const
;  void setParameters (QString parameters);


  virtual UdpShopGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 地区ID(参阅地区编号)
 **/
  qlonglong area;

/**
 * @brief 开始时间
 **/
  QDateTime beginTime;

/**
 * @brief 结束时间
 **/
  QDateTime endTime;

/**
 * @brief 指标ID(参阅指标编号)
 **/
  qlonglong fields;

/**
 * @brief 备用
 **/
  QString parameters;

};

#endif  /* UDPSHOPGETREQUEST_H */
