#ifndef FENXIAOCOOPERATIONTERMINATEREQUEST_H
#define FENXIAOCOOPERATIONTERMINATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoCooperationTerminateResponse.h>

/**
 * TOP API: 终止与分销商的合作关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationTerminateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCooperateId() const
;  void setCooperateId (qlonglong cooperateId);

 qlonglong getEndRemainDays() const
;  void setEndRemainDays (qlonglong endRemainDays);

 QString getEndRemark() const
;  void setEndRemark (QString endRemark);


  virtual FenxiaoCooperationTerminateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 合作编号
 **/
  qlonglong cooperateId;

/**
 * @brief 终止天数，可选1,2,3,5,7,15，在多少天数内终止
 **/
  qlonglong endRemainDays;

/**
 * @brief 终止说明（5-2000字）
 **/
  QString endRemark;

};

#endif  /* FENXIAOCOOPERATIONTERMINATEREQUEST_H */
