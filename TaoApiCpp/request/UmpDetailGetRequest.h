#ifndef UMPDETAILGETREQUEST_H
#define UMPDETAILGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpDetailGetResponse.h>

/**
 * TOP API: 查询活动详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDetailId() const
;  void setDetailId (qlonglong detailId);


  virtual UmpDetailGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 活动详情的id
 **/
  qlonglong detailId;

};

#endif  /* UMPDETAILGETREQUEST_H */
