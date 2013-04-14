#ifndef HOTELSOLDHOTELSINCREMENTGETREQUEST_H
#define HOTELSOLDHOTELSINCREMENTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelSoldHotelsIncrementGetResponse.h>

/**
 * TOP API: 1. 此接口用于查询该会话用户作为酒店发布者发布的酒店被审核通过的增量酒店信息。 
2. 查询提交的起始时间至今的增量酒店记录：start_modified：2011-7-1 16:00:00 
3. 返回数据结果为发布酒店时间的正序排列
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelSoldHotelsIncrementGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndModified() const
;  void setEndModified (QDateTime endModified);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartModified() const
;  void setStartModified (QDateTime startModified);

 bool getUseHasNext() const
;  void setUseHasNext (bool useHasNext);


  virtual HotelSoldHotelsIncrementGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 【不推荐使用，现在总是返回从修改开始时间到目前为止的所有记录，与修改结束时间不再相关】查询修改结束时间，必须大于修改开始时间（修改时间跨度不能大于1天）。格式：yyyy-MM-dd HH:mm:ss。
 **/
  QDateTime endModified;

/**
 * @brief 分页页码。取值范围，大于零的整数，默认值1，即返回第一页的数据
 **/
  qlonglong pageNo;

/**
 * @brief 页面大小，取值范围1-100，默认大小20
 **/
  qlonglong pageSize;

/**
 * @brief 查询修改开始时间（修改时间跨度不能大于1天）。格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime startModified;

/**
 * @brief 【不推荐使用，现在返回结果总会包含总记录数和是否存在下一页】是否使用has_next的分页方式，如果指定true，则返回的结果中不包含总记录数，但是会新增一个是否存在下一页的字段，效率比总记录数高
 **/
  bool useHasNext;

};

#endif  /* HOTELSOLDHOTELSINCREMENTGETREQUEST_H */
