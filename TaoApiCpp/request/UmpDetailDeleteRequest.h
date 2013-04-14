#ifndef UMPDETAILDELETEREQUEST_H
#define UMPDETAILDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpDetailDeleteResponse.h>

/**
 * TOP API: 删除活动详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDetailId() const
;  void setDetailId (qlonglong detailId);


  virtual UmpDetailDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动详情id
 **/
  qlonglong detailId;

};

#endif  /* UMPDETAILDELETEREQUEST_H */
