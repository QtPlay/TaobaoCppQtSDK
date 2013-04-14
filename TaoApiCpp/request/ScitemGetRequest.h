#ifndef SCITEMGETREQUEST_H
#define SCITEMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ScitemGetResponse.h>

/**
 * TOP API: 根据id查询商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual ScitemGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品id
 **/
  qlonglong itemId;

};

#endif  /* SCITEMGETREQUEST_H */
