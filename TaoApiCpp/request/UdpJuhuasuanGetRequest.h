#ifndef UDPJUHUASUANGETREQUEST_H
#define UDPJUHUASUANGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UdpJuhuasuanGetResponse.h>

/**
 * TOP API: 聚划算指标查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UdpJuhuasuanGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getBeginTime() const
;  void setBeginTime (QDateTime beginTime);

 qlonglong getCatid() const
;  void setCatid (qlonglong catid);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 qlonglong getFields() const
;  void setFields (qlonglong fields);

 qlonglong getItemid() const
;  void setItemid (qlonglong itemid);

 QString getParameters() const
;  void setParameters (QString parameters);


  virtual UdpJuhuasuanGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 开始时间
 **/
  QDateTime beginTime;

/**
 * @brief 类目编号
 **/
  qlonglong catid;

/**
 * @brief 结束时间
 **/
  QDateTime endTime;

/**
 * @brief 指标ID(参阅指标编号)
 **/
  qlonglong fields;

/**
 * @brief 2407364
 **/
  qlonglong itemid;

/**
 * @brief 备用
 **/
  QString parameters;

};

#endif  /* UDPJUHUASUANGETREQUEST_H */
