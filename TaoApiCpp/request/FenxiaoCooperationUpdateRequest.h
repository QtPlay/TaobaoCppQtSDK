#ifndef FENXIAOCOOPERATIONUPDATEREQUEST_H
#define FENXIAOCOOPERATIONUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoCooperationUpdateResponse.h>

/**
 * TOP API: 供应商更新合作的分销商等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDistributorId() const
;  void setDistributorId (qlonglong distributorId);

 qlonglong getGradeId() const
;  void setGradeId (qlonglong gradeId);

 QString getTradeType() const
;  void setTradeType (QString tradeType);


  virtual FenxiaoCooperationUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分销商ID
 **/
  qlonglong distributorId;

/**
 * @brief 等级ID(0代表取消)
 **/
  qlonglong gradeId;

/**
 * @brief 分销方式(新增)： AGENT(代销)、DEALER(经销)(默认为代销)
 **/
  QString tradeType;

};

#endif  /* FENXIAOCOOPERATIONUPDATEREQUEST_H */
