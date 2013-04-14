#ifndef WANGWANGESERVICELOGINLOGSGETREQUEST_H
#define WANGWANGESERVICELOGINLOGSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceLoginlogsGetResponse.h>

/**
 * TOP API: 通过用户id查询用户自己或者子账户的登录日志： 
主账号可以查询自己和店铺子账户的登录日志（查询时需要输入子账号，多个用，隔开） 
组管理员可以查询自己和组内子账号的登录日志（查询时需要输入子账号，多个用，隔开） 
非组管理员的子账户只能查询自己的登录日志
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceLoginlogsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QString getServiceStaffId() const
;  void setServiceStaffId (QString serviceStaffId);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);


  virtual WangwangEserviceLoginlogsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询登录日志的结束时间，必须按示例的格式，否则会返回错误
 **/
  QDateTime endDate;

/**
 * @brief 需要查询登录日志的账号列表
 **/
  QString serviceStaffId;

/**
 * @brief 查询登录日志的开始日期，必须按示例的格式，否则会返回错误
 **/
  QDateTime startDate;

};

#endif  /* WANGWANGESERVICELOGINLOGSGETREQUEST_H */
