#ifndef FENXIAOCOOPERATIONGETREQUEST_H
#define FENXIAOCOOPERATIONGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoCooperationGetResponse.h>

/**
 * TOP API: 获取供应商的合作关系信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);

 QString getStatus() const
;  void setStatus (QString status);

 QString getTradeType() const
;  void setTradeType (QString tradeType);


  virtual FenxiaoCooperationGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 合作结束时间yyyy-MM-dd
 **/
  QDateTime endDate;

/**
 * @brief 页码（大于0的整数，默认1）
 **/
  qlonglong pageNo;

/**
 * @brief 每页记录数（默认20，最大50）
 **/
  qlonglong pageSize;

/**
 * @brief 合作开始时间yyyy-MM-dd
 **/
  QDateTime startDate;

/**
 * @brief 合作状态： NORMAL(合作中)、 ENDING(终止中) 、END (终止)
 **/
  QString status;

/**
 * @brief 分销方式：AGENT(代销) 、DEALER（经销）
 **/
  QString tradeType;

};

#endif  /* FENXIAOCOOPERATIONGETREQUEST_H */
