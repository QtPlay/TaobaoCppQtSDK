#ifndef WANGWANGESERVICEEVALSGETREQUEST_H
#define WANGWANGESERVICEEVALSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceEvalsGetResponse.h>

/**
 * TOP API: 根据用户id查询用户对应的评价详细情况， 
主账号id可以查询店铺内子账号的评价 
组管理员可以查询组内账号的评价 
非管理员的子账号可以查自己的评价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceEvalsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QString getServiceStaffId() const
;  void setServiceStaffId (QString serviceStaffId);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);


  virtual WangwangEserviceEvalsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结束时间
 **/
  QDateTime endDate;

/**
 * @brief 想要查询的账号列表
 **/
  QString serviceStaffId;

/**
 * @brief 开始时间
 **/
  QDateTime startDate;

};

#endif  /* WANGWANGESERVICEEVALSGETREQUEST_H */
