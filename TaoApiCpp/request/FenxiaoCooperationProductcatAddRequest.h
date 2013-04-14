#ifndef FENXIAOCOOPERATIONPRODUCTCATADDREQUEST_H
#define FENXIAOCOOPERATIONPRODUCTCATADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoCooperationProductcatAddResponse.h>

/**
 * TOP API: 追加授权产品线
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationProductcatAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCooperateId() const
;  void setCooperateId (qlonglong cooperateId);

 qlonglong getGradeId() const
;  void setGradeId (qlonglong gradeId);

 QString getProductLineList() const
;  void setProductLineList (QString productLineList);


  virtual FenxiaoCooperationProductcatAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 合作关系id
 **/
  qlonglong cooperateId;

/**
 * @brief 等级ID（为空则不修改）
 **/
  qlonglong gradeId;

/**
 * @brief 产品线id列表，若有多个，以逗号分隔
 **/
  QString productLineList;

};

#endif  /* FENXIAOCOOPERATIONPRODUCTCATADDREQUEST_H */
