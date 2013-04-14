#ifndef EMAISUBCATSSEARCHREQUEST_H
#define EMAISUBCATSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/EmaiSubcatsSearchResponse.h>

/**
 * TOP API: 特卖子类目搜索
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EmaiSubcatsSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCat() const
;  void setCat (qlonglong cat);


  virtual EmaiSubcatsSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 父类目ID，固定是特卖前台一级类目id：50100982
 **/
  qlonglong cat;

};

#endif  /* EMAISUBCATSSEARCHREQUEST_H */
