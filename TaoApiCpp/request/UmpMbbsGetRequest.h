#ifndef UMPMBBSGETREQUEST_H
#define UMPMBBSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UmpMbbsGetResponse.h>

/**
 * TOP API: 获取营销积木块列表，可以根据类型获取，也可以将该字段设为空，获取所有的
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getType() const
;  void setType (QString type);


  virtual UmpMbbsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 积木块类型。如果该字段为空表示查出所有类型的 
现在有且仅有如下几种：resource,condition,action,target
 **/
  QString type;

};

#endif  /* UMPMBBSGETREQUEST_H */
