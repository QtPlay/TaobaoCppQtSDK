#ifndef UMPMBBSLISTGETREQUEST_H
#define UMPMBBSLISTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpMbbsListGetResponse.h>

/**
 * TOP API: 通过营销积木id列表来获取营销积木块列表。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbsListGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getIds() const
;  void setIds (qlonglong ids);


  virtual UmpMbbsListGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 营销积木块id组成的字符串。
 **/
  qlonglong ids;

};

#endif  /* UMPMBBSLISTGETREQUEST_H */
