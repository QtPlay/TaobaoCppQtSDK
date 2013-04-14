#ifndef UMPACTIVITYGETREQUEST_H
#define UMPACTIVITYGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpActivityGetResponse.h>

/**
 * TOP API: 查询营销活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);


  virtual UmpActivityGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动id
 **/
  qlonglong actId;

};

#endif  /* UMPACTIVITYGETREQUEST_H */
