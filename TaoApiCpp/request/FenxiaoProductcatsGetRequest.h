#ifndef FENXIAOPRODUCTCATSGETREQUEST_H
#define FENXIAOPRODUCTCATSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductcatsGetResponse.h>

/**
 * TOP API: 查询供应商的所有产品线数据。根据登陆用户来查询，不需要其他入参
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductcatsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);


  virtual FenxiaoProductcatsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 返回字段列表
 **/
  QString fields;

};

#endif  /* FENXIAOPRODUCTCATSGETREQUEST_H */
