#ifndef FENXIAOGRADEADDREQUEST_H
#define FENXIAOGRADEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoGradeAddResponse.h>

/**
 * TOP API: 新建等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradeAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getName() const
;  void setName (QString name);


  virtual FenxiaoGradeAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 等级名称，等级名称不可重复
 **/
  QString name;

};

#endif  /* FENXIAOGRADEADDREQUEST_H */
