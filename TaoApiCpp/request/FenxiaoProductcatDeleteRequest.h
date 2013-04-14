#ifndef FENXIAOPRODUCTCATDELETEREQUEST_H
#define FENXIAOPRODUCTCATDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductcatDeleteResponse.h>

/**
 * TOP API: 删除产品线
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductcatDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getProductLineId() const
;  void setProductLineId (qlonglong productLineId);


  virtual FenxiaoProductcatDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品线ID
 **/
  qlonglong productLineId;

};

#endif  /* FENXIAOPRODUCTCATDELETEREQUEST_H */
