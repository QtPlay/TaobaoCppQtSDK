#ifndef UMPACTIVITYDELETEREQUEST_H
#define UMPACTIVITYDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpActivityDeleteResponse.h>

/**
 * TOP API: 删除营销活动。对应的活动详情等将会被全部删除。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);


  virtual UmpActivityDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动id
 **/
  qlonglong actId;

};

#endif  /* UMPACTIVITYDELETEREQUEST_H */
