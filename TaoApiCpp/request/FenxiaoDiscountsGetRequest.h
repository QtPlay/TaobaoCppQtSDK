#ifndef FENXIAODISCOUNTSGETREQUEST_H
#define FENXIAODISCOUNTSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoDiscountsGetResponse.h>

/**
 * TOP API: 查询折扣信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDiscountsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDiscountId() const
;  void setDiscountId (qlonglong discountId);

 QString getExtFields() const
;  void setExtFields (QString extFields);


  virtual FenxiaoDiscountsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 折扣ID
 **/
  qlonglong discountId;

/**
 * @brief 指定查询额外的信息，可选值：DETAIL（查询折扣详情），多个可选值用逗号分割。（只允许指定折扣ID情况下使用）
 **/
  QString extFields;

};

#endif  /* FENXIAODISCOUNTSGETREQUEST_H */
