#ifndef UMPACTIVITIESLISTGETREQUEST_H
#define UMPACTIVITIESLISTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpActivitiesListGetResponse.h>

/**
 * TOP API: 按照营销活动id的列表ids，查询对应的营销活动列表。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivitiesListGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getIds() const
;  void setIds (qlonglong ids);


  virtual UmpActivitiesListGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 营销活动id列表。
 **/
  qlonglong ids;

};

#endif  /* UMPACTIVITIESLISTGETREQUEST_H */
