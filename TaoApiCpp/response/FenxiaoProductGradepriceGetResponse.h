#ifndef FENXIAOPRODUCTGRADEPRICEGETRESPONSE_H
#define FENXIAOPRODUCTGRADEPRICEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/GradeDiscount.h>


/**
 * @brief TOP RESPONSE API: 等级折扣查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductGradepriceGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductGradepriceGetResponse() { }

  QList<GradeDiscount> getGradeDiscounts() const;
  void setGradeDiscounts (QList<GradeDiscount> gradeDiscounts);  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 等级折扣列表
 **/
  QList<GradeDiscount> gradeDiscounts;

/**
 * @brief 操作是否成功
 **/
  bool isSuccess;

};

#endif
