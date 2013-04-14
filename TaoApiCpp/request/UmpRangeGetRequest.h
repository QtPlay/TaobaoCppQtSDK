#ifndef UMPRANGEGETREQUEST_H
#define UMPRANGEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpRangeGetResponse.h>

/**
 * TOP API: 查询某个卖家所有参加或者不参加某项活动的物品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpRangeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getActId() const
;  void setActId (qlonglong actId);


  virtual UmpRangeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动id
 **/
  qlonglong actId;

};

#endif  /* UMPRANGEGETREQUEST_H */
